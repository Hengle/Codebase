#ifndef __VERSION_COMMON_H__
#define	__VERSION_COMMON_H__
#define		__VER 17	// 15��
#define __MAINSERVER
#if !defined( __TESTSERVER ) && !defined( __MAINSERVER )
	#define __INTERNALSERVER
#endif

#if __VER >= 16
#define __NEW_PROP_PARAMETER 
#define __3RD_LEGEND16 	
#define __IMPROVE_MAP_SYSTEM
#define __INSTANCE_AGGRO_SYSTEM
#define __ITEM_LINK

#endif // __VER >= 16

#if __VER >= 17
#define __NEW_WEAPON_GLOW
#define __COLOSSEUM
#define __BAHARA_AGGRO_SYSTEM
#endif // __VER >= 17

#define		__SERVER				// Ŭ���̾�Ʈ �����ڵ带 �������� �ʱ� ���� define

#define		__CRC
#define		__SO1014				// ���� ���� ó��( ĳ��, ����, �α��� )
#define		__PROTOCOL0910
#define		__PROTOCOL1021
#define		__VERIFYNETLIB
#define		__DOS1101
//#define		__S0114_RELOADPRO	// ĳ���� DB���� �о���� : Neuz, Trans, login, World, Certifier, Account( ini : SKIP_TRACKING �߰� )
#define		__TWN_LOGIN0816
#define		__STL_0402				// stl

#define	__GPAUTH
#define	__GPAUTH_01
#define	__GPAUTH_02		// ����/������ ���� ���� - ����
//#define	__GPAUTH_03		// ����/������ ���� ���� - ����
#define	__EUROPE_0514

// 14th
//	#define 	__PCBANG		// PC�� ����

#define __ENCRYPT_PASSWORD	//	mulcom	BEGIN100218	�н����� ��ȣȭ

#if (_MSC_VER > 1200)
#define		__VS2003		// �����Ϸ�����.net
#endif




#if	  defined(__INTERNALSERVER)		// ���� �繫�� �׽�Ʈ���� 
	#define	__SECURITY_0628
	#define __JAPAN_AUTH			// �Ϻ� ���� ����(������)
#elif defined(__TESTSERVER)			// �ܺ� ���� �׽�Ʈ����


	
#elif defined(__MAINSERVER)			// �ܺ� ����

#endif	// end - ���������� define 

#endif	// __VERSION_COMMON_H__