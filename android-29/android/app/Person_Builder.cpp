#include "./Person.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "./Person_Builder.hpp"

namespace android::app
{
	// Fields
	
	Person_Builder::Person_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Person_Builder::Person_Builder()
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
	QAndroidJniObject Person_Builder::setIcon(android::graphics::drawable::Icon arg0)
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
} // namespace android::app

