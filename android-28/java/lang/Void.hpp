#pragma once

#include "../../JObject.hpp"


namespace java::lang
{
	class Void : public JObject
	{
	public:
		// Fields
		static jclass TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Void(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Void(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::lang

