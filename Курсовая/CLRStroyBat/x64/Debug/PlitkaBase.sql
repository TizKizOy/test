USE [Plitka]
GO
/****** Object:  Table [dbo].[Material]    Script Date: 08.06.2024 13:48:08 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Material](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[Наименование] [nchar](40) NULL,
	[Артикул] [nchar](5) NULL,
	[Цена руб.] [money] NULL,
	[Ед.изм.] [nchar](5) NULL,
	[Страна] [nchar](15) NULL,
	[Цена $] [money] NULL,
	[Бренд] [nchar](10) NULL,
 CONSTRAINT [PK_Material] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[MaterialZakup]    Script Date: 08.06.2024 13:48:08 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[MaterialZakup](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[Наименование] [nchar](40) NULL,
	[Артикул] [nchar](5) NULL,
	[Цена руб.] [money] NULL,
	[Ед.изм.] [nchar](5) NULL,
	[Страна] [nchar](15) NULL,
	[Цена $] [money] NULL,
	[Бренд] [nchar](10) NULL,
 CONSTRAINT [PK_MaterialZakup] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Registr]    Script Date: 08.06.2024 13:48:08 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Registr](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[login] [varchar](50) NOT NULL,
	[password] [varchar](50) NOT NULL,
 CONSTRAINT [PK_Registr] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[SaveSmeta]    Script Date: 08.06.2024 13:48:08 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[SaveSmeta](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[№] [nchar](5) NULL,
	[Дата] [nchar](15) NULL,
	[Наименование] [nchar](30) NULL,
	[Телефон] [nchar](20) NULL,
	[Сумма, руб.] [nchar](30) NULL,
	[Состояние] [nchar](20) NULL,
	[Начало работ] [nchar](15) NULL,
	[Окончание план] [nchar](15) NULL,
	[Конец работ] [nchar](15) NULL,
 CONSTRAINT [PK_SaveSmeta] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[SaveTableMaterial]    Script Date: 08.06.2024 13:48:08 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[SaveTableMaterial](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[Наименование] [nchar](40) NULL,
	[Артикул] [nchar](5) NULL,
	[Цена руб.] [nchar](20) NULL,
	[Ед.изм.] [nchar](5) NULL,
	[Страна] [nchar](15) NULL,
	[Цена $] [nchar](20) NULL,
	[Бренд] [nchar](10) NULL,
	[idusd] [nchar](10) NULL,
	[Количество] [nchar](10) NULL,
 CONSTRAINT [PK_SaveTableMaterial] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[SaveTableWork]    Script Date: 08.06.2024 13:48:08 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[SaveTableWork](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[Наименование] [nchar](40) NULL,
	[Артикул] [nchar](15) NULL,
	[Цена руб.] [nchar](20) NULL,
	[Тип] [nchar](15) NULL,
	[Ед.изм.] [nchar](15) NULL,
	[Страна] [nchar](15) NULL,
	[Цена $] [nchar](20) NULL,
	[idusdt] [nchar](10) NULL,
	[Количество] [nchar](10) NULL,
 CONSTRAINT [PK_SaveTableWork] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[SaveTextBoxs]    Script Date: 08.06.2024 13:48:08 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[SaveTextBoxs](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[data1] [nchar](15) NULL,
	[data2] [nchar](15) NULL,
	[data3] [nchar](150) NULL,
	[data4] [nchar](25) NULL,
	[data5] [nchar](15) NULL,
	[data6] [nchar](15) NULL,
	[data7] [nchar](15) NULL,
	[data8] [nchar](200) NULL,
	[data9] [nchar](200) NULL,
	[data10] [nchar](500) NULL,
	[idusd] [nchar](10) NULL,
 CONSTRAINT [PK_SaveTextBoxs] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Worki]    Script Date: 08.06.2024 13:48:08 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Worki](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[Наименование] [nchar](50) NULL,
	[Артикул] [nchar](5) NULL,
	[Цена руб.] [money] NULL,
	[Тип] [nchar](15) NULL,
	[Ед.изм.] [nchar](7) NULL,
	[Страна] [nchar](20) NULL,
	[Цена $] [money] NULL,
 CONSTRAINT [PK_Worki] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[WorkZakup]    Script Date: 08.06.2024 13:48:08 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[WorkZakup](
	[id] [int] NOT NULL,
	[Наименование] [nchar](50) NULL,
	[Артикул] [nchar](5) NULL,
	[Цена руб.] [money] NULL,
	[Тип] [nchar](15) NULL,
	[Ед.изм.] [nchar](7) NULL,
	[Страна] [nchar](20) NULL,
	[Цена $] [money] NULL
) ON [PRIMARY]
GO
