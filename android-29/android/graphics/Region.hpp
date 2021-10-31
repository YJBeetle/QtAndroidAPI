#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Path;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class Region_Op;
}
namespace android::os
{
	class Parcel;
}

namespace android::graphics
{
	class Region : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		Region(QAndroidJniObject obj);
		// Constructors
		Region();
		Region(android::graphics::Rect arg0);
		Region(android::graphics::Region &arg0);
		Region(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean contains(jint arg0, jint arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getBoundaryPath();
		jboolean getBoundaryPath(android::graphics::Path arg0);
		QAndroidJniObject getBounds();
		jboolean getBounds(android::graphics::Rect arg0);
		jboolean isComplex();
		jboolean isEmpty();
		jboolean isRect();
		jboolean op(android::graphics::Rect arg0, android::graphics::Region_Op arg1);
		jboolean op(android::graphics::Region arg0, android::graphics::Region_Op arg1);
		jboolean op(android::graphics::Rect arg0, android::graphics::Region arg1, android::graphics::Region_Op arg2);
		jboolean op(android::graphics::Region arg0, android::graphics::Region arg1, android::graphics::Region_Op arg2);
		jboolean op(jint arg0, jint arg1, jint arg2, jint arg3, android::graphics::Region_Op arg4);
		jboolean quickContains(android::graphics::Rect arg0);
		jboolean quickContains(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean quickReject(android::graphics::Rect arg0);
		jboolean quickReject(android::graphics::Region arg0);
		jboolean quickReject(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean set(android::graphics::Rect arg0);
		jboolean set(android::graphics::Region arg0);
		jboolean set(jint arg0, jint arg1, jint arg2, jint arg3);
		void setEmpty();
		jboolean setPath(android::graphics::Path arg0, android::graphics::Region arg1);
		jstring toString();
		void translate(jint arg0, jint arg1);
		void translate(jint arg0, jint arg1, android::graphics::Region arg2);
		jboolean _union(android::graphics::Rect arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::graphics

