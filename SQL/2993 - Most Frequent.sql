SELECT count(distinct(amount)) as most_frequent_value
from value_table
group by amount
order by most_frequent_value desc
limit 1;
