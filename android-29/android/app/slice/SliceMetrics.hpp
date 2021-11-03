#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::app::slice
{
	class SliceMetrics : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SliceMetrics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SliceMetrics(QJniObject obj);
		
		// Constructors
		SliceMetrics(android::content::Context arg0, android::net::Uri arg1);
		
		// Methods
		void logHidden();
		void logTouch(jint arg0, android::net::Uri arg1);
		void logVisible();
	};
} // namespace android::app::slice

