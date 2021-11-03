#include "./Session2Command.hpp"
#include "./Session2CommandGroup.hpp"
#include "./Session2CommandGroup_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	Session2CommandGroup_Builder::Session2CommandGroup_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Session2CommandGroup_Builder::Session2CommandGroup_Builder()
		: JObject(
			"android.media.Session2CommandGroup$Builder",
			"()V"
		) {}
	Session2CommandGroup_Builder::Session2CommandGroup_Builder(android::media::Session2CommandGroup arg0)
		: JObject(
			"android.media.Session2CommandGroup$Builder",
			"(Landroid/media/Session2CommandGroup;)V",
			arg0.object()
		) {}
	
	// Methods
	android::media::Session2CommandGroup_Builder Session2CommandGroup_Builder::addCommand(android::media::Session2Command arg0) const
	{
		return callObjectMethod(
			"addCommand",
			"(Landroid/media/Session2Command;)Landroid/media/Session2CommandGroup$Builder;",
			arg0.object()
		);
	}
	android::media::Session2CommandGroup Session2CommandGroup_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/Session2CommandGroup;"
		);
	}
	android::media::Session2CommandGroup_Builder Session2CommandGroup_Builder::removeCommand(android::media::Session2Command arg0) const
	{
		return callObjectMethod(
			"removeCommand",
			"(Landroid/media/Session2Command;)Landroid/media/Session2CommandGroup$Builder;",
			arg0.object()
		);
	}
} // namespace android::media

