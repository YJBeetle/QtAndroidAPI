#pragma once

#ifndef ANDROID_CONTENT_PM_SHORTCUTINFO_BUILDER
#define ANDROID_CONTENT_PM_SHORTCUTINFO_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::pm
{
	class ShortcutInfo;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content
{
	class LocusId;
}
namespace __jni_impl::android::app
{
	class Person;
}

namespace __jni_impl::android::content::pm
{
	class ShortcutInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, jstring arg1);
		void __constructor(__jni_impl::android::content::Context arg0, const QString &arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(__jni_impl::android::os::PersistableBundle arg0);
		QAndroidJniObject setIcon(__jni_impl::android::graphics::drawable::Icon arg0);
		QAndroidJniObject setActivity(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject setIntent(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject setLocusId(__jni_impl::android::content::LocusId arg0);
		QAndroidJniObject setShortLabel(jstring arg0);
		QAndroidJniObject setShortLabel(const QString &arg0);
		QAndroidJniObject setLongLabel(jstring arg0);
		QAndroidJniObject setLongLabel(const QString &arg0);
		QAndroidJniObject setDisabledMessage(jstring arg0);
		QAndroidJniObject setDisabledMessage(const QString &arg0);
		QAndroidJniObject setCategories(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setIntents(jarray arg0);
		QAndroidJniObject setPerson(__jni_impl::android::app::Person arg0);
		QAndroidJniObject setPersons(jarray arg0);
		QAndroidJniObject setLongLived(jboolean arg0);
		QAndroidJniObject setRank(jint arg0);
	};
} // namespace __jni_impl::android::content::pm

#include "../Context.hpp"
#include "ShortcutInfo.hpp"
#include "../../os/PersistableBundle.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../ComponentName.hpp"
#include "../Intent.hpp"
#include "../LocusId.hpp"
#include "../../app/Person.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	
	// Constructors
	void ShortcutInfo_Builder::__constructor(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ShortcutInfo$Builder",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ShortcutInfo_Builder::__constructor(__jni_impl::android::content::Context arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ShortcutInfo$Builder",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject ShortcutInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/content/pm/ShortcutInfo;"
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setExtras(__jni_impl::android::os::PersistableBundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/PersistableBundle;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setIcon(__jni_impl::android::graphics::drawable::Icon arg0)
	{
		return __thiz.callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setActivity(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"setActivity",
			"(Landroid/content/ComponentName;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setIntent(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"setIntent",
			"(Landroid/content/Intent;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setLocusId(__jni_impl::android::content::LocusId arg0)
	{
		return __thiz.callObjectMethod(
			"setLocusId",
			"(Landroid/content/LocusId;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setShortLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setShortLabel",
			"(Ljava/lang/CharSequence;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setShortLabel(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setShortLabel",
			"(Ljava/lang/CharSequence;)Landroid/content/pm/ShortcutInfo$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setLongLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setLongLabel",
			"(Ljava/lang/CharSequence;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setLongLabel(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setLongLabel",
			"(Ljava/lang/CharSequence;)Landroid/content/pm/ShortcutInfo$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setDisabledMessage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDisabledMessage",
			"(Ljava/lang/CharSequence;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setDisabledMessage(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setDisabledMessage",
			"(Ljava/lang/CharSequence;)Landroid/content/pm/ShortcutInfo$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setCategories(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setCategories",
			"(Ljava/util/Set;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setIntents(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setIntents",
			"([Landroid/content/Intent;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setPerson(__jni_impl::android::app::Person arg0)
	{
		return __thiz.callObjectMethod(
			"setPerson",
			"(Landroid/app/Person;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setPersons(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setPersons",
			"([Landroid/app/Person;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setLongLived(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setLongLived",
			"(Z)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setRank(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setRank",
			"(I)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class ShortcutInfo_Builder : public __jni_impl::android::content::pm::ShortcutInfo_Builder
	{
	public:
		ShortcutInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ShortcutInfo_Builder(__jni_impl::android::content::Context arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_SHORTCUTINFO_BUILDER

