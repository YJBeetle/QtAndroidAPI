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
		PageRange(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PageRange(jint arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getEnd() const;
		jint getStart() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::print

