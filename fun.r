df <- data.frame(
  Name = c("john","jane","mike","rani","rahul"),
  age = c(12,13,14,15,16),
  marks_Science = c(90,40,30,60,10),
  marks_Maths = c(80,75,70,65,60),
  marks_English = c(70,65,60,55,50)
)
df1 <- data.frame(
  Name = "rina",
  age = 17,
  marks_Science = 65,
  marks_Maths = 55,
  marks_English = 45
  
)
Add <- rbind(df,df1)
Add
df$total_marks <- df$marks_Sciencec + df$marks_Maths +
df$marks_English 
df