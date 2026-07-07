#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
class JString;

namespace android::media
{
	class MediaFormat_QpOffsetRect : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaFormat_QpOffsetRect(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaFormat_QpOffsetRect(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaFormat_QpOffsetRect(android::graphics::Rect arg0, jint arg1);
		
		// Methods
		static JString flattenToString(JObject arg0);
		JString flattenToString() const;
		void set(android::graphics::Rect arg0, jint arg1) const;
	};
} // namespace android::media

