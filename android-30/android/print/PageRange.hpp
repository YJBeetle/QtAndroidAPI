#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::print
{
	class PageRange : public JObject
	{
	public:
		// Fields
		static android::print::PageRange ALL_PAGES();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PageRange(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PageRange(QJniObject obj);
		
		// Constructors
		PageRange(jint arg0, jint arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getEnd();
		jint getStart();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::print

