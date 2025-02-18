#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::view::inputmethod
{
	class CorrectionInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CorrectionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CorrectionInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CorrectionInfo(jint arg0, JString arg1, JString arg2);
		
		// Methods
		jint describeContents() const;
		JString getNewText() const;
		jint getOffset() const;
		JString getOldText() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

