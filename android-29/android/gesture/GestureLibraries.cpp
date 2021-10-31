#include "../content/Context.hpp"
#include "./GestureLibrary.hpp"
#include "../../java/io/File.hpp"
#include "./GestureLibraries.hpp"

namespace android::gesture
{
	// Fields
	
	// QAndroidJniObject forward
	GestureLibraries::GestureLibraries(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject GestureLibraries::fromFile(java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromFile",
			"(Ljava/io/File;)Landroid/gesture/GestureLibrary;",
			arg0.object()
		);
	}
	QAndroidJniObject GestureLibraries::fromFile(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromFile",
			"(Ljava/lang/String;)Landroid/gesture/GestureLibrary;",
			arg0
		);
	}
	QAndroidJniObject GestureLibraries::fromPrivateFile(android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromPrivateFile",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/gesture/GestureLibrary;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject GestureLibraries::fromRawResource(android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromRawResource",
			"(Landroid/content/Context;I)Landroid/gesture/GestureLibrary;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::gesture

