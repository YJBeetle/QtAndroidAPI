#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace java::lang::ref
{
	class Cleaner : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Cleaner(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Cleaner(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::lang::ref::Cleaner create();
		static java::lang::ref::Cleaner create(JObject arg0);
		JObject register_(JObject arg0, JObject arg1) const;
	};
} // namespace java::lang::ref

