#pragma once

#include "../../JObject.hpp"

namespace dalvik::system
{
	class ZipPathValidator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ZipPathValidator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ZipPathValidator(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static void clearCallback();
		static void setCallback(JObject arg0);
	};
} // namespace dalvik::system

