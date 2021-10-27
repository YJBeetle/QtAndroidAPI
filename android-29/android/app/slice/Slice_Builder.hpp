#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::app
{
	class RemoteInput;
}
namespace __jni_impl::android::app::slice
{
	class Slice;
}
namespace __jni_impl::android::app::slice
{
	class SliceSpec;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::app::slice
{
	class Slice_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::app::slice::Slice_Builder arg0);
		void __constructor(__jni_impl::android::net::Uri arg0, __jni_impl::android::app::slice::SliceSpec arg1);
		
		// Methods
		QAndroidJniObject addAction(__jni_impl::android::app::PendingIntent arg0, __jni_impl::android::app::slice::Slice arg1, jstring arg2);
		QAndroidJniObject addAction(__jni_impl::android::app::PendingIntent arg0, __jni_impl::android::app::slice::Slice arg1, const QString &arg2);
		QAndroidJniObject addBundle(__jni_impl::android::os::Bundle arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject addBundle(__jni_impl::android::os::Bundle arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject addHints(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject addIcon(__jni_impl::android::graphics::drawable::Icon arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject addIcon(__jni_impl::android::graphics::drawable::Icon arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject addInt(jint arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject addInt(jint arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject addLong(jlong arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject addLong(jlong arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject addRemoteInput(__jni_impl::android::app::RemoteInput arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject addRemoteInput(__jni_impl::android::app::RemoteInput arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject addSubSlice(__jni_impl::android::app::slice::Slice arg0, jstring arg1);
		QAndroidJniObject addSubSlice(__jni_impl::android::app::slice::Slice arg0, const QString &arg1);
		QAndroidJniObject addText(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject addText(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject build();
		QAndroidJniObject setCallerNeeded(jboolean arg0);
	};
} // namespace __jni_impl::android::app::slice

#include "../PendingIntent.hpp"
#include "../RemoteInput.hpp"
#include "Slice.hpp"
#include "SliceSpec.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::app::slice
{
	// Fields
	
	// Constructors
	void Slice_Builder::__constructor(__jni_impl::android::app::slice::Slice_Builder arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.Slice$Builder",
			"(Landroid/app/slice/Slice$Builder;)V",
			arg0.__jniObject().object()
		);
	}
	void Slice_Builder::__constructor(__jni_impl::android::net::Uri arg0, __jni_impl::android::app::slice::SliceSpec arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.Slice$Builder",
			"(Landroid/net/Uri;Landroid/app/slice/SliceSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Slice_Builder::addAction(__jni_impl::android::app::PendingIntent arg0, __jni_impl::android::app::slice::Slice arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"addAction",
			"(Landroid/app/PendingIntent;Landroid/app/slice/Slice;Ljava/lang/String;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Slice_Builder::addAction(__jni_impl::android::app::PendingIntent arg0, __jni_impl::android::app::slice::Slice arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"addAction",
			"(Landroid/app/PendingIntent;Landroid/app/slice/Slice;Ljava/lang/String;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject Slice_Builder::addBundle(__jni_impl::android::os::Bundle arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addBundle",
			"(Landroid/os/Bundle;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addBundle(__jni_impl::android::os::Bundle arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addBundle",
			"(Landroid/os/Bundle;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addHints(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addHints",
			"(Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addIcon(__jni_impl::android::graphics::drawable::Icon arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addIcon",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addIcon(__jni_impl::android::graphics::drawable::Icon arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addIcon",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addInt(jint arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addInt",
			"(ILjava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addInt(jint arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addInt",
			"(ILjava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addLong(jlong arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addLong",
			"(JLjava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addLong(jlong arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addLong",
			"(JLjava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addRemoteInput(__jni_impl::android::app::RemoteInput arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addRemoteInput",
			"(Landroid/app/RemoteInput;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addRemoteInput(__jni_impl::android::app::RemoteInput arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addRemoteInput",
			"(Landroid/app/RemoteInput;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addSubSlice(__jni_impl::android::app::slice::Slice arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"addSubSlice",
			"(Landroid/app/slice/Slice;Ljava/lang/String;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Slice_Builder::addSubSlice(__jni_impl::android::app::slice::Slice arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"addSubSlice",
			"(Landroid/app/slice/Slice;Ljava/lang/String;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Slice_Builder::addText(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addText",
			"(Ljava/lang/CharSequence;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addText(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addText",
			"(Ljava/lang/CharSequence;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/slice/Slice;"
		);
	}
	QAndroidJniObject Slice_Builder::setCallerNeeded(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setCallerNeeded",
			"(Z)Landroid/app/slice/Slice$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::app::slice

namespace android::app::slice
{
	class Slice_Builder : public __jni_impl::android::app::slice::Slice_Builder
	{
	public:
		Slice_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Slice_Builder(__jni_impl::android::app::slice::Slice_Builder arg0)
		{
			__constructor(
				arg0);
		}
		Slice_Builder(__jni_impl::android::net::Uri arg0, __jni_impl::android::app::slice::SliceSpec arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app::slice

