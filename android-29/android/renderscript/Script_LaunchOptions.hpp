#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class Script_LaunchOptions : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Script_LaunchOptions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Script_LaunchOptions(QJniObject obj);
		
		// Constructors
		Script_LaunchOptions();
		
		// Methods
		jint getXEnd();
		jint getXStart();
		jint getYEnd();
		jint getYStart();
		jint getZEnd();
		jint getZStart();
		android::renderscript::Script_LaunchOptions setX(jint arg0, jint arg1);
		android::renderscript::Script_LaunchOptions setY(jint arg0, jint arg1);
		android::renderscript::Script_LaunchOptions setZ(jint arg0, jint arg1);
	};
} // namespace android::renderscript

