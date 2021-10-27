#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Paint_Join : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BEVEL();
		static QAndroidJniObject MITER();
		static QAndroidJniObject ROUND();
		
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
	QAndroidJniObject Paint_Join::BEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Join",
			"BEVEL",
			"Landroid/graphics/Paint$Join;"
		);
	}
	QAndroidJniObject Paint_Join::MITER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Join",
			"MITER",
			"Landroid/graphics/Paint$Join;"
		);
	}
	QAndroidJniObject Paint_Join::ROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Join",
			"ROUND",
			"Landroid/graphics/Paint$Join;"
		);
	}
	
	// Constructors
	void Paint_Join::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Paint$Join",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Paint_Join::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Join",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Join;",
			arg0
		);
	}
	QAndroidJniObject Paint_Join::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Join",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Join;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Paint_Join::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Join",
			"values",
			"()[Landroid/graphics/Paint$Join;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Paint_Join : public __jni_impl::android::graphics::Paint_Join
	{
	public:
		Paint_Join(QAndroidJniObject obj) { __thiz = obj; }
		Paint_Join()
		{
			__constructor();
		}
	};
} // namespace android::graphics

