#pragma once

#include "../../../../../JObject.hpp"

namespace android::graphics::pdf::models::selection
{
	class SelectionBoundary;
}
namespace android::os
{
	class Parcel;
}

namespace android::graphics::pdf::models::selection
{
	class PageSelection : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PageSelection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PageSelection(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PageSelection(jint arg0, android::graphics::pdf::models::selection::SelectionBoundary arg1, android::graphics::pdf::models::selection::SelectionBoundary arg2, JObject arg3);
		
		// Methods
		jint describeContents() const;
		jint getPage() const;
		JObject getSelectedTextContents() const;
		android::graphics::pdf::models::selection::SelectionBoundary getStart() const;
		android::graphics::pdf::models::selection::SelectionBoundary getStop() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics::pdf::models::selection

