#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
class JString;

namespace android::webkit
{
	class DateSorter : public JObject
	{
	public:
		// Fields
		static jint DAY_COUNT();
		
		// QJniObject forward
		template<typename ...Ts> explicit DateSorter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateSorter(QJniObject obj);
		
		// Constructors
		DateSorter(android::content::Context arg0);
		
		// Methods
		jlong getBoundary(jint arg0);
		jint getIndex(jlong arg0);
		JString getLabel(jint arg0);
	};
} // namespace android::webkit

