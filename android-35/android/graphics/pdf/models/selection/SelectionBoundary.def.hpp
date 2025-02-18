#pragma once

#include "../../../../../JObject.hpp"

namespace android::graphics
{
	class Point;
}
namespace android::os
{
	class Parcel;
}

namespace android::graphics::pdf::models::selection
{
	class SelectionBoundary : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SelectionBoundary(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SelectionBoundary(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SelectionBoundary(android::graphics::Point arg0);
		SelectionBoundary(jint arg0);
		
		// Methods
		jint describeContents() const;
		jint getIndex() const;
		jboolean getIsRtl() const;
		android::graphics::Point getPoint() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics::pdf::models::selection

