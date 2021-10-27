#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Person;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}

namespace __jni_impl::android::app
{
	class Person_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBot(jboolean arg0);
		QAndroidJniObject setIcon(__jni_impl::android::graphics::drawable::Icon arg0);
		QAndroidJniObject setImportant(jboolean arg0);
		QAndroidJniObject setKey(jstring arg0);
		QAndroidJniObject setKey(const QString &arg0);
		QAndroidJniObject setName(jstring arg0);
		QAndroidJniObject setName(const QString &arg0);
		QAndroidJniObject setUri(jstring arg0);
		QAndroidJniObject setUri(const QString &arg0);
	};
} // namespace __jni_impl::android::app

#include "Person.hpp"
#include "../graphics/drawable/Icon.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Person_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Person$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Person_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/Person;"
		);
	}
	QAndroidJniObject Person_Builder::setBot(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setBot",
			"(Z)Landroid/app/Person$Builder;",
			arg0
		);
	}
	QAndroidJniObject Person_Builder::setIcon(__jni_impl::android::graphics::drawable::Icon arg0)
	{
		return __thiz.callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Person$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Person_Builder::setImportant(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setImportant",
			"(Z)Landroid/app/Person$Builder;",
			arg0
		);
	}
	QAndroidJniObject Person_Builder::setKey(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setKey",
			"(Ljava/lang/String;)Landroid/app/Person$Builder;",
			arg0
		);
	}
	QAndroidJniObject Person_Builder::setKey(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setKey",
			"(Ljava/lang/String;)Landroid/app/Person$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Person_Builder::setName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setName",
			"(Ljava/lang/CharSequence;)Landroid/app/Person$Builder;",
			arg0
		);
	}
	QAndroidJniObject Person_Builder::setName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setName",
			"(Ljava/lang/CharSequence;)Landroid/app/Person$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Person_Builder::setUri(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setUri",
			"(Ljava/lang/String;)Landroid/app/Person$Builder;",
			arg0
		);
	}
	QAndroidJniObject Person_Builder::setUri(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setUri",
			"(Ljava/lang/String;)Landroid/app/Person$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Person_Builder : public __jni_impl::android::app::Person_Builder
	{
	public:
		Person_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Person_Builder()
		{
			__constructor();
		}
	};
} // namespace android::app

