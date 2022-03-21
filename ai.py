import numpy as np
import pandas as pd

from sklearn.datasets import  load_boston
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import mean_squared_error

boston = load_boston()

boston_df = pd.DataFrame(boston.data, columns=boston.feature_names)

boston_df['PRICE'] =boston.target
print('보스톤 주택가격 데이터셋 크기:', boston_df.shape)

y = boston_df['PRICE']
x = boston_df.drop(['PRICE'], axis=1, inplace=False)

x, xt, y, yt = train_test_split(x, y, test_size=1, random_state=0)


clf = LinearRegression()
clf.fit(x, y)
prediction = clf.predict(xt)

result = pd.Series(data=np.round(clf.coef_, 1), index=x.columns )
result.sort_values(ascending=False)

print('=== 예측 주가 변동 가격  ===')
print(result)
