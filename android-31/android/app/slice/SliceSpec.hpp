#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::app::slice
{
	class SliceSpec : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SliceSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SliceSpec(QJniObject obj);
		
		// Constructors
		SliceSpec(JString arg0, jint arg1);
		
		// Methods
		jboolean canRender(android::app::slice::SliceSpec arg0) const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getRevision() const;
		JString getType() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::slice

