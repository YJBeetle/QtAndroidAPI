#pragma once

#include "../../java/lang/Exception.def.hpp"

class JString;
class JThrowable;

namespace org::json
{
	class JSONException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JSONException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		JSONException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		JSONException(JString arg0);
		JSONException(JThrowable arg0);
		JSONException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace org::json

