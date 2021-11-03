#pragma once

#include "../../JObject.hpp"


namespace org::json
{
	class JSONStringer : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JSONStringer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JSONStringer(QJniObject obj);
		
		// Constructors
		JSONStringer();
		
		// Methods
		org::json::JSONStringer array();
		org::json::JSONStringer endArray();
		org::json::JSONStringer endObject();
		org::json::JSONStringer key(jstring arg0);
		org::json::JSONStringer object();
		jstring toString();
		org::json::JSONStringer value(jboolean arg0);
		org::json::JSONStringer value(jdouble arg0);
		org::json::JSONStringer value(jobject arg0);
		org::json::JSONStringer value(jlong arg0);
	};
} // namespace org::json

