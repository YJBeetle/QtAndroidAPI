#pragma once

#include "../../../../JObject.hpp"

class JIntArray;
namespace android::graphics
{
	class Point;
}
namespace android::graphics::pdf::models
{
	class FormEditRecord;
}
class JString;

namespace android::graphics::pdf::models
{
	class FormEditRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FormEditRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FormEditRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FormEditRecord_Builder(jint arg0, jint arg1, jint arg2);
		
		// Methods
		android::graphics::pdf::models::FormEditRecord build() const;
		android::graphics::pdf::models::FormEditRecord_Builder setClickPoint(android::graphics::Point arg0) const;
		android::graphics::pdf::models::FormEditRecord_Builder setSelectedIndices(JIntArray arg0) const;
		android::graphics::pdf::models::FormEditRecord_Builder setText(JString arg0) const;
	};
} // namespace android::graphics::pdf::models

