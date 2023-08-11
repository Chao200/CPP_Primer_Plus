// // 冲突
// enum egg {Small, Medium, Large, Jumbo};
// enum t_shirt{Small, Medium, Large, XLarge};


// // 类作用域，使用 class 或 struct
// enum class egg {Small, Medium, Large, Jumbo};
// enum struct t_shirt{Small, Medium, Large, XLarge};
// egg choic = egg::Large;
// t_shirt Floyd = t_shirt::Medium;


// // 常规枚举会隐式自动转换类型，但是作用域枚举不会，必须显示转换
// enum egg_old {Small, Medium, Large, Jumbo};
// enum class t_shirt{Small, Medium, Large, XLarge};
// egg_old one = Medium;
// t_shirt rolf = t_shirt::Large;

// int king = one;
// int ring = rolf;
// int Frodo = int(rolf);


// // 指定底层类型
// enum class pizza: short {Small, Medium, Large};
