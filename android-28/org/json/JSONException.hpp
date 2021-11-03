#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"


namespace org::json
{
	class JSONException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JSONException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		JSONException(QJniObject obj);
		
		// Constructors
		JSONException(jstring arg0);
		JSONException(jthrowable arg0);
		JSONException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace org::json

