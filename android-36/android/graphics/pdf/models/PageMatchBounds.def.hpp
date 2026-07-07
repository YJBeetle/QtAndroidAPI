#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::graphics::pdf::models
{
	class PageMatchBounds : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PageMatchBounds(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PageMatchBounds(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PageMatchBounds(JObject arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		JObject getBounds() const;
		jint getTextStartIndex() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics::pdf::models

