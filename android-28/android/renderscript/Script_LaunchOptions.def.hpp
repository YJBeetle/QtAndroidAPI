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
		Script_LaunchOptions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Script_LaunchOptions();
		
		// Methods
		jint getXEnd() const;
		jint getXStart() const;
		jint getYEnd() const;
		jint getYStart() const;
		jint getZEnd() const;
		jint getZStart() const;
		android::renderscript::Script_LaunchOptions setX(jint arg0, jint arg1) const;
		android::renderscript::Script_LaunchOptions setY(jint arg0, jint arg1) const;
		android::renderscript::Script_LaunchOptions setZ(jint arg0, jint arg1) const;
	};
} // namespace android::renderscript

