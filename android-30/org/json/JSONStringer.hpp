#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace org::json
{
	class JSONStringer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JSONStringer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JSONStringer(QAndroidJniObject obj);
		
		// Constructors
		JSONStringer();
		
		// Methods
		org::json::JSONStringer array() const;
		org::json::JSONStringer endArray() const;
		org::json::JSONStringer endObject() const;
		org::json::JSONStringer key(JString arg0) const;
		org::json::JSONStringer object() const;
		JString toString() const;
		org::json::JSONStringer value(jboolean arg0) const;
		org::json::JSONStringer value(jdouble arg0) const;
		org::json::JSONStringer value(JObject arg0) const;
		org::json::JSONStringer value(jlong arg0) const;
	};
} // namespace org::json

