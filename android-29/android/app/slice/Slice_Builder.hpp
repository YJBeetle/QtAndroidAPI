#pragma once

#include "../PendingIntent.def.hpp"
#include "../RemoteInput.def.hpp"
#include "./Slice.def.hpp"
#include "./SliceSpec.def.hpp"
#include "../../graphics/drawable/Icon.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./Slice_Builder.def.hpp"

namespace android::app::slice
{
	// Fields
	
	// Constructors
	inline Slice_Builder::Slice_Builder(android::app::slice::Slice_Builder &arg0)
		: JObject(
			"android.app.slice.Slice$Builder",
			"(Landroid/app/slice/Slice$Builder;)V",
			arg0.object()
		) {}
	inline Slice_Builder::Slice_Builder(android::net::Uri arg0, android::app::slice::SliceSpec arg1)
		: JObject(
			"android.app.slice.Slice$Builder",
			"(Landroid/net/Uri;Landroid/app/slice/SliceSpec;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::app::slice::Slice_Builder Slice_Builder::addAction(android::app::PendingIntent arg0, android::app::slice::Slice arg1, JString arg2) const
	{
		return callObjectMethod(
			"addAction",
			"(Landroid/app/PendingIntent;Landroid/app/slice/Slice;Ljava/lang/String;)Landroid/app/slice/Slice$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline android::app::slice::Slice_Builder Slice_Builder::addBundle(android::os::Bundle arg0, JString arg1, JObject arg2) const
	{
		return callObjectMethod(
			"addBundle",
			"(Landroid/os/Bundle;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::app::slice::Slice_Builder Slice_Builder::addHints(JObject arg0) const
	{
		return callObjectMethod(
			"addHints",
			"(Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.object()
		);
	}
	inline android::app::slice::Slice_Builder Slice_Builder::addIcon(android::graphics::drawable::Icon arg0, JString arg1, JObject arg2) const
	{
		return callObjectMethod(
			"addIcon",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::app::slice::Slice_Builder Slice_Builder::addInt(jint arg0, JString arg1, JObject arg2) const
	{
		return callObjectMethod(
			"addInt",
			"(ILjava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::app::slice::Slice_Builder Slice_Builder::addLong(jlong arg0, JString arg1, JObject arg2) const
	{
		return callObjectMethod(
			"addLong",
			"(JLjava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::app::slice::Slice_Builder Slice_Builder::addRemoteInput(android::app::RemoteInput arg0, JString arg1, JObject arg2) const
	{
		return callObjectMethod(
			"addRemoteInput",
			"(Landroid/app/RemoteInput;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::app::slice::Slice_Builder Slice_Builder::addSubSlice(android::app::slice::Slice arg0, JString arg1) const
	{
		return callObjectMethod(
			"addSubSlice",
			"(Landroid/app/slice/Slice;Ljava/lang/String;)Landroid/app/slice/Slice$Builder;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::app::slice::Slice_Builder Slice_Builder::addText(JString arg0, JString arg1, JObject arg2) const
	{
		return callObjectMethod(
			"addText",
			"(Ljava/lang/CharSequence;Ljava/lang/String;Ljava/util/List;)Landroid/app/slice/Slice$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::app::slice::Slice Slice_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/slice/Slice;"
		);
	}
	inline android::app::slice::Slice_Builder Slice_Builder::setCallerNeeded(jboolean arg0) const
	{
		return callObjectMethod(
			"setCallerNeeded",
			"(Z)Landroid/app/slice/Slice$Builder;",
			arg0
		);
	}
} // namespace android::app::slice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::slice;
#endif
