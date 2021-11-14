#pragma once

#include "../../JObject.hpp"

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
class JObject;
class JString;

namespace android::graphics
{
	class Region : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Region(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Region(QJniObject obj);
		
		// Constructors
		Region();
		Region(android::graphics::Rect arg0);
		Region(android::graphics::Region &arg0);
		Region(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean contains(jint arg0, jint arg1) const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::graphics::Path getBoundaryPath() const;
		jboolean getBoundaryPath(android::graphics::Path arg0) const;
		android::graphics::Rect getBounds() const;
		jboolean getBounds(android::graphics::Rect arg0) const;
		jboolean isComplex() const;
		jboolean isEmpty() const;
		jboolean isRect() const;
		jboolean op(android::graphics::Rect arg0, android::graphics::Region_Op arg1) const;
		jboolean op(android::graphics::Region arg0, android::graphics::Region_Op arg1) const;
		jboolean op(android::graphics::Rect arg0, android::graphics::Region arg1, android::graphics::Region_Op arg2) const;
		jboolean op(android::graphics::Region arg0, android::graphics::Region arg1, android::graphics::Region_Op arg2) const;
		jboolean op(jint arg0, jint arg1, jint arg2, jint arg3, android::graphics::Region_Op arg4) const;
		jboolean quickContains(android::graphics::Rect arg0) const;
		jboolean quickContains(jint arg0, jint arg1, jint arg2, jint arg3) const;
		jboolean quickReject(android::graphics::Rect arg0) const;
		jboolean quickReject(android::graphics::Region arg0) const;
		jboolean quickReject(jint arg0, jint arg1, jint arg2, jint arg3) const;
		jboolean set(android::graphics::Rect arg0) const;
		jboolean set(android::graphics::Region arg0) const;
		jboolean set(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setEmpty() const;
		jboolean setPath(android::graphics::Path arg0, android::graphics::Region arg1) const;
		JString toString() const;
		void translate(jint arg0, jint arg1) const;
		void translate(jint arg0, jint arg1, android::graphics::Region arg2) const;
		jboolean union_(android::graphics::Rect arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics

