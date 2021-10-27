#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Paint_Align : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CENTER();
		static QAndroidJniObject LEFT();
		static QAndroidJniObject RIGHT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject Paint_Align::CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Align",
			"CENTER",
			"Landroid/graphics/Paint$Align;"
		);
	}
	QAndroidJniObject Paint_Align::LEFT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Align",
			"LEFT",
			"Landroid/graphics/Paint$Align;"
		);
	}
	QAndroidJniObject Paint_Align::RIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Align",
			"RIGHT",
			"Landroid/graphics/Paint$Align;"
		);
	}
	
	// Constructors
	void Paint_Align::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Paint$Align",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Paint_Align::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Align",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Align;",
			arg0
		);
	}
	QAndroidJniObject Paint_Align::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Align",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Align;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Paint_Align::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Align",
			"values",
			"()[Landroid/graphics/Paint$Align;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Paint_Align : public __jni_impl::android::graphics::Paint_Align
	{
	public:
		Paint_Align(QAndroidJniObject obj) { __thiz = obj; }
		Paint_Align()
		{
			__constructor();
		}
	};
} // namespace android::graphics

