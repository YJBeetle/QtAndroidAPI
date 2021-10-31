#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextClassificationContext : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassificationContext(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassificationContext(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring getPackageName();
		jstring getWidgetType();
		jstring getWidgetVersion();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

