#include "./Session2Command.hpp"
#include "./Session2CommandGroup.hpp"
#include "./Session2CommandGroup_Builder.hpp"

namespace android::media
{
	// Fields
	
	Session2CommandGroup_Builder::Session2CommandGroup_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Session2CommandGroup_Builder::Session2CommandGroup_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.media.Session2CommandGroup$Builder",
			"()V"
		);
	}
	Session2CommandGroup_Builder::Session2CommandGroup_Builder(android::media::Session2CommandGroup arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.Session2CommandGroup$Builder",
			"(Landroid/media/Session2CommandGroup;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Session2CommandGroup_Builder::addCommand(android::media::Session2Command arg0)
	{
		return __thiz.callObjectMethod(
			"addCommand",
			"(Landroid/media/Session2Command;)Landroid/media/Session2CommandGroup$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Session2CommandGroup_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/Session2CommandGroup;"
		);
	}
	QAndroidJniObject Session2CommandGroup_Builder::removeCommand(android::media::Session2Command arg0)
	{
		return __thiz.callObjectMethod(
			"removeCommand",
			"(Landroid/media/Session2Command;)Landroid/media/Session2CommandGroup$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media

