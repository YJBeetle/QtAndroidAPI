#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::translation
{
	class UiTranslationManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UiTranslationManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UiTranslationManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void registerUiTranslationStateCallback(__JniBaseClass arg0, __JniBaseClass arg1);
		void unregisterUiTranslationStateCallback(__JniBaseClass arg0);
	};
} // namespace android::view::translation

