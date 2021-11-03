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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CorrectionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CorrectionInfo(QAndroidJniObject obj);
		
		// Constructors
		CorrectionInfo(jint arg0, JString arg1, JString arg2);
		
		// Methods
		jint describeContents();
		JString getNewText();
		jint getOffset();
		JString getOldText();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

