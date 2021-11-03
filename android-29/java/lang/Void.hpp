#pragma once

#include "../../JObject.hpp"

class JClass;

namespace java::lang
{
	class Void : public JObject
	{
	public:
		// Fields
		static JClass TYPE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Void(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Void(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::lang

