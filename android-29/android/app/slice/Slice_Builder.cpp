#include "../PendingIntent.hpp"
#include "../RemoteInput.hpp"
#include "./Slice.hpp"
#include "./SliceSpec.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "./Slice_Builder.hpp"

namespace android::app::slice
{
	// Fields
	
	Slice_Builder::Slice_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Slice_Builder::Slice_Builder(android::app::slice::Slice_Builder &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.Slice$Builder",
			"(Landroid/app/slice/Slice$Builder;)V",
			arg0.__jniObject().object()
		);
	}
	Slice_Builder::Slice_Builder(android::net::Uri arg0, android::app::slice::SliceSpec arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.Slice$Builder",
			"(Landroid/net/Uri;Landroid/app/slice/SliceSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Slice_Builder::addAction(android::app::PendingIntent arg0, android::app::slice::Slice arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"addAction",
			"(Landroid/app/PendingIntent;Landroid/app/slice/Slice;Ljava/lang/String;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Slice_Builder::addBundle(android::os::Bundle arg0, jstring arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addBundle",
			"(Landroid/os/Bundle;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addHints(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addHints",
			"(Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addIcon(android::graphics::drawable::Icon arg0, jstring arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addIcon",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addInt(jint arg0, jstring arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addInt",
			"(ILjava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addLong(jlong arg0, jstring arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addLong",
			"(JLjava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addRemoteInput(android::app::RemoteInput arg0, jstring arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addRemoteInput",
			"(Landroid/app/RemoteInput;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Slice_Builder::addSubSlice(android::app::slice::Slice arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"addSubSlice",
			"(Landroid/app/slice/Slice;Ljava/lang/String;)Landroid/app/slice/Slice$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Slice_Builder::addText(jstring arg0, jstring arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addText",
			"(Ljava/lang/CharSequence;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0,
			arg1,
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
} // namespace android::app::slice

