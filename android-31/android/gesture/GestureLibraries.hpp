#pragma once

#include "../content/Context.def.hpp"
#include "./GestureLibrary.def.hpp"
#include "../os/ParcelFileDescriptor.def.hpp"
#include "../../java/io/File.def.hpp"
#include "../../JString.hpp"
#include "./GestureLibraries.def.hpp"

namespace android::gesture
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::gesture::GestureLibrary GestureLibraries::fromFile(java::io::File arg0)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromFile",
			"(Ljava/io/File;)Landroid/gesture/GestureLibrary;",
			arg0.object()
		);
	}
	inline android::gesture::GestureLibrary GestureLibraries::fromFile(JString arg0)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromFile",
			"(Ljava/lang/String;)Landroid/gesture/GestureLibrary;",
			arg0.object<jstring>()
		);
	}
	inline android::gesture::GestureLibrary GestureLibraries::fromFileDescriptor(android::os::ParcelFileDescriptor arg0)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;)Landroid/gesture/GestureLibrary;",
			arg0.object()
		);
	}
	inline android::gesture::GestureLibrary GestureLibraries::fromPrivateFile(android::content::Context arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromPrivateFile",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/gesture/GestureLibrary;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::gesture::GestureLibrary GestureLibraries::fromRawResource(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromRawResource",
			"(Landroid/content/Context;I)Landroid/gesture/GestureLibrary;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::gesture

// Base class headers

