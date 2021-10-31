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
	
	// QAndroidJniObject forward
	Slice_Builder::Slice_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Slice_Builder::Slice_Builder(android::app::slice::Slice_Builder &arg0)
		: __JniBaseClass(
			"android.app.slice.Slice$Builder",
			"(Landroid/app/slice/Slice$Builder;)V",
			arg0.object()
		) {}
	Slice_Builder::Slice_Builder(android::net::Uri arg0, android::app::slice::SliceSpec arg1)
		: __JniBaseClass(
			"android.app.slice.Slice$Builder",
			"(Landroid/net/Uri;Landroid/app/slice/SliceSpec;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::app::slice::Slice_Builder Slice_Builder::addAction(android::app::PendingIntent arg0, android::app::slice::Slice arg1, jstring arg2)
	{
		return callObjectMethod(
			"addAction",
			"(Landroid/app/PendingIntent;Landroid/app/slice/Slice;Ljava/lang/String;)Landroid/app/slice/Slice$Builder;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::app::slice::Slice_Builder Slice_Builder::addBundle(android::os::Bundle arg0, jstring arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"addBundle",
			"(Landroid/os/Bundle;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::app::slice::Slice_Builder Slice_Builder::addHints(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"addHints",
			"(Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.object()
		);
	}
	android::app::slice::Slice_Builder Slice_Builder::addIcon(android::graphics::drawable::Icon arg0, jstring arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"addIcon",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::app::slice::Slice_Builder Slice_Builder::addInt(jint arg0, jstring arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"addInt",
			"(ILjava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::app::slice::Slice_Builder Slice_Builder::addLong(jlong arg0, jstring arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"addLong",
			"(JLjava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::app::slice::Slice_Builder Slice_Builder::addRemoteInput(android::app::RemoteInput arg0, jstring arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"addRemoteInput",
			"(Landroid/app/RemoteInput;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::app::slice::Slice_Builder Slice_Builder::addSubSlice(android::app::slice::Slice arg0, jstring arg1)
	{
		return callObjectMethod(
			"addSubSlice",
			"(Landroid/app/slice/Slice;Ljava/lang/String;)Landroid/app/slice/Slice$Builder;",
			arg0.object(),
			arg1
		);
	}
	android::app::slice::Slice_Builder Slice_Builder::addText(jstring arg0, jstring arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"addText",
			"(Ljava/lang/CharSequence;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::app::slice::Slice Slice_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/slice/Slice;"
		);
	}
	android::app::slice::Slice_Builder Slice_Builder::setCallerNeeded(jboolean arg0)
	{
		return callObjectMethod(
			"setCallerNeeded",
			"(Z)Landroid/app/slice/Slice$Builder;",
			arg0
		);
	}
} // namespace android::app::slice

