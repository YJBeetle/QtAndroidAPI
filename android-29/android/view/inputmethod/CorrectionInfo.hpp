#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class CorrectionInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CorrectionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CorrectionInfo(QJniObject obj);
		
		// Constructors
		CorrectionInfo(jint arg0, jstring arg1, jstring arg2);
		
		// Methods
		jint describeContents();
		jstring getNewText();
		jint getOffset();
		jstring getOldText();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

