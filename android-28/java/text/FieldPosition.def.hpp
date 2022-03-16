#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;
namespace java::text
{
	class Format_Field;
}

namespace java::text
{
	class FieldPosition : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FieldPosition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FieldPosition(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FieldPosition(jint arg0);
		FieldPosition(java::text::Format_Field arg0);
		FieldPosition(java::text::Format_Field arg0, jint arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getBeginIndex() const;
		jint getEndIndex() const;
		jint getField() const;
		java::text::Format_Field getFieldAttribute() const;
		jint hashCode() const;
		void setBeginIndex(jint arg0) const;
		void setEndIndex(jint arg0) const;
		JString toString() const;
	};
} // namespace java::text

