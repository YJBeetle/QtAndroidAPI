#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Intent;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextClassification : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		TextClassification(QAndroidJniObject obj);
		// Constructors
		TextClassification() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getActions();
		jfloat getConfidenceScore(jstring arg0);
		jfloat getConfidenceScore(const QString &arg0);
		jstring getEntity(jint arg0);
		jint getEntityCount();
		QAndroidJniObject getExtras();
		QAndroidJniObject getIcon();
		jstring getId();
		QAndroidJniObject getIntent();
		jstring getLabel();
		QAndroidJniObject getOnClickListener();
		jstring getText();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

