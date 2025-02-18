#pragma once

#include "../../../../JObject.hpp"

class JIntArray;
namespace android::graphics
{
	class Point;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::graphics::pdf::models
{
	class FormEditRecord : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint EDIT_TYPE_CLICK();
		static jint EDIT_TYPE_SET_INDICES();
		static jint EDIT_TYPE_SET_TEXT();
		
		// QJniObject forward
		template<typename ...Ts> explicit FormEditRecord(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FormEditRecord(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::graphics::Point getClickPoint() const;
		jint getPageNumber() const;
		JIntArray getSelectedIndices() const;
		JString getText() const;
		jint getType() const;
		jint getWidgetIndex() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics::pdf::models

