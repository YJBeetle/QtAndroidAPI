#pragma once

#include "./Session2Command.def.hpp"
#include "./Session2CommandGroup.def.hpp"
#include "./Session2CommandGroup_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline Session2CommandGroup_Builder::Session2CommandGroup_Builder()
		: JObject(
			"android.media.Session2CommandGroup$Builder",
			"()V"
		) {}
	inline Session2CommandGroup_Builder::Session2CommandGroup_Builder(android::media::Session2CommandGroup arg0)
		: JObject(
			"android.media.Session2CommandGroup$Builder",
			"(Landroid/media/Session2CommandGroup;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::media::Session2CommandGroup_Builder Session2CommandGroup_Builder::addCommand(android::media::Session2Command arg0) const
	{
		return callObjectMethod(
			"addCommand",
			"(Landroid/media/Session2Command;)Landroid/media/Session2CommandGroup$Builder;",
			arg0.object()
		);
	}
	inline android::media::Session2CommandGroup Session2CommandGroup_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/Session2CommandGroup;"
		);
	}
	inline android::media::Session2CommandGroup_Builder Session2CommandGroup_Builder::removeCommand(android::media::Session2Command arg0) const
	{
		return callObjectMethod(
			"removeCommand",
			"(Landroid/media/Session2Command;)Landroid/media/Session2CommandGroup$Builder;",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
