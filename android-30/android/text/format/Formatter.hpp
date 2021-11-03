#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}

namespace android::text::format
{
	class Formatter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Formatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Formatter(QJniObject obj);
		
		// Constructors
		Formatter();
		
		// Methods
		static jstring formatFileSize(android::content::Context arg0, jlong arg1);
		static jstring formatIpAddress(jint arg0);
		static jstring formatShortFileSize(android::content::Context arg0, jlong arg1);
	};
} // namespace android::text::format

