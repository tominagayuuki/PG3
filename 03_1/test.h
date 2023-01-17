#pragma once
class TestSingleton final
{
	TestSingleton();
	~TestSingleton();
public:
	//�R�s�[�R���X�g���N�^�𖳌��ɂ���
	TestSingleton(const TestSingleton& obj) = delete;
	//������Z�q�𖳌��ɂ���
	TestSingleton& operator=(const TestSingleton& obj) = delete;

	static TestSingleton* GetInstance();
};

