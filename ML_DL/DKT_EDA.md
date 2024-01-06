# DKT EDA 중 idea 정리

![original histogram](/img/originhist.png)

- User ID 별 assessmentitemID 의 count 를 나타낸 표
- 즉, user 별 푼 갯수
- 한 쪽으로 편향된 분포를 보인다.
- Feature 로 사용하기엔 extreme outlier 이다.
---

![log histogram](/img/afterlog.png)

- User ID 별 assessmentitemID 의 count 에 np.log 를 씌웠다.
- log scaling이 되었다고 볼 수 있나 ..?

![answer rate](/img/ansrate.png)

- 극단적인 분포가 어느정도 줄었고 long tail도 사라졌으니 해당값을 binning 한 뒤 정답률 평균을 확인했다.
- 최저 55% 최대 약 70% 로 거의 15% 의 차이를 보인다.
- 이 정도 값을 보이면 유의미한 Feature 로 생각할 수 있을까?
