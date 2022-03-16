#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
class JString;

namespace android::text::format
{
	class Formatter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Formatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Formatter(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Formatter();
		
		// Methods
		static JString formatFileSize(android::content::Context arg0, jlong arg1);
		static JString formatIpAddress(jint arg0);
		static JString formatShortFileSize(android::content::Context arg0, jlong arg1);
	};
} // namespace android::text::format

