```py
from tkinter import *
from tkvideo import tkvideo 

window = Tk()

label = Label(window)
label.pack()
player = tkvideo("C:\\Users\\Rochak Enterprise\\Videos\\MTV Hustle 2.0 Episode 14.720p - Vegamovies.to.mkv", label, loop=1, size=(1920,1080))

player.play()

window.mainloop()
```


```python
import requests
from bs4 import BeautifulSoup
from tkinter import *


all_new = []
res = requests.get("https://www.fidelity.co.uk/shares/stock-market-news/", "html.parser")
soup = BeautifulSoup(res.text)
# print(soup.body)
news_title = soup.find_all(class_="listing-article-container")
# print(news_title)

for news in news_title:
    all_new.append({
        "title":  news.find(class_="listing-article-title").get_text(),
        "description" : news.find(class_="listing-article-description").get_text()
    })
   
print(all_new)


```


```python
from bs4 import BeautifulSoup
import requests

all_news = []
req = requests.get("https://www.tradingview.com/news/markets/?category=stock")

soup = BeautifulSoup(req.text, features="html.parser")

news_title = soup.find_all(class_="container-lu7Cy9jC")

# for news in news_title:
#     all_news.append({
#         "Title":,
#     })

for news  in news_title:
    print(news.find(class_="title-rY32JioV").get_text())

# print(all_news)
```



```python
from bs4 import BeautifulSoup
import requests

url = "https://www.tradingview.com/accounts/signin/"

login = {"username": "heymaaa", 
         "password": "JaiShreeram123@"}

s = requests.session()
response = s.post(url, data=login)
print(response.status_code)
```


```python
import requests
from bs4 import BeautifulSoup

all_news = []
req = requests.get("https://simplywall.st/news/in")

soup = BeautifulSoup(req.text, features="html.parser")

news_title = soup.find_all(class_="styled__StyledArticle-sc-wtkvpy-2 styled__Container-sc-1yoc20u-0 gFfCJK jvowSa")

for news in news_title:
    all_news.append({
        "title": news.find(class_="styled__Title-sc-wtkvpy-9 xxEmL").get_text(),
        "desciption": news.find(class_="styled__ExcerptContainer-sc-wtkvpy-10 hwLcCy").get_text()
    })

print(all_news)
    

```